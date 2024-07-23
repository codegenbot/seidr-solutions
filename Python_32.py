```
def sum_even_and_odd(nums):
    even_sum = 0
    odd_sum = 0
    
    for num in nums:
        if num % 2 == 0:
            even_sum += num
        else:
            odd_sum += num
            
    return even_sum, odd_sum

numbers = list(map(int, input("Enter numbers separated by space: ").split()))
even_nums, odd_nums = sum_even_and_odd(numbers)
print(f"Sum of even numbers: {even_nums}")
print(f"Sum of odd numbers: {odd_nums}")