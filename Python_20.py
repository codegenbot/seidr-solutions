```
def get_closest_elements(numbers, target_sum):
    numbers.sort()
    min_diff = float('inf')
    closest_pair = ()
    left = 0
    right = len(numbers) - 1
    
    while right > left:
        current_sum = numbers[left] + numbers[right]
        diff = abs(target_sum - current_sum)
        
        if diff < min_diff:
            min_diff = diff
            closest_pair = (numbers[left], numbers[right])
        
        if current_sum < target_sum:
            left += 1
        else:
            right -= 1
    
    return closest_pair

get_closest_elements(list(map(int, input().split())), int(input("Enter the target sum: ")))