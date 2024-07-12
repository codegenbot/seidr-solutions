def get_closest_elements(numbers):
    min_diff = float('inf')
    closest_pair = ()
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            diff = abs(target_sum - (numbers[i] + numbers[j]))
            if diff < min_diff:
                min_diff = diff
                closest_pair = (numbers[i], numbers[j])
    return closest_pair

target_sum = int(input("Enter the target sum: "))
numbers = list(map(int, input().split()))
find_closest_elements = get_closest_elements(numbers)
check(find_closest_elements)