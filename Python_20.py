```
def find_closest_elements(input_list):
    numbers = list(map(int, input().split()))
    min_distance = float('inf')
    closest_pair = ()
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            distance = abs(numbers[i] - numbers[j])
            if distance < min_distance:
                min_distance = distance
                closest_pair = (numbers[i], numbers[j])
    return closest_pair

result = find_closest_elements(input()) 
print(result)