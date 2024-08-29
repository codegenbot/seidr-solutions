```
def cut_vector(vector):
    for i in range(len(vector) - 1):
        first_half = vector[:i+1]
        second_half = vector[i+1:]
        if sum(first_half) == sum(second_half) or abs(sum(first_half) - sum(second_half)) == min(abs(sum(x) - sum(y)) for x, y in [(vector[:i+1], vector[i+1:]), (vector[:i], vector[i:])]):
            return first_half, second_half
    return [0], vector

input_vector = list(map(int, input().split()))
print(*cut_vector(input_vector), sep='\n')