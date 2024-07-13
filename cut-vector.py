```
def cut_vector(vector):
    left_sum = 0
    for i in range(len(vector)):
        left_sum += vector[i]
        if left_sum * 2 == sum(vector):
            return [vector[:i+1], vector[i:]]
        elif left_sum * 2 > sum(vector):
            first_half = vector[:i]
            second_half = vector[i:]
            diff = abs(sum(first_half) - sum(second_half))
            for j in range(i-1, -1, -1):
                left_sum -= vector[j]
                if abs(left_sum * 2 - sum(vector)) < diff:
                    return [vector[:j+1], vector[j:]]
    return [vector, []]