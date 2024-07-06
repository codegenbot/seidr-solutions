for i in range(len(vector)):
    current_sum = 0
    for j in range(i + 1):
        current_sum += vector[j]
        if current_sum < 0:
            return i
return -1