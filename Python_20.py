def find_closest_elements(nums: list)-> tuple:
    num1 = min(nums)
    num2 = max(nums)
    if abs(num1 - num2) < 0.00001:
        return (num1, num2)
    elif num1 < num2:
        return (num1, num2)
    else:
        return (num2, num1)

print(find_closest_elements([1.1, 2.2, 3.1, 4.1, 5.1]))