def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    min_difference = float('inf')
    cut_position = 0

    for i, num in enumerate(vector):
        current_sum += num
        difference = abs(current_sum * 2 - total_sum)
        
        if difference < min_difference:
            min_difference = difference
            cut_position = i
            
    return vector[:cut_position+1], vector[cut_position+1:]

vector = list(map(int, input().split()))
subvector1, subvector2 = cut_vector(vector)
print(*subvector1)
print(*subvector2)