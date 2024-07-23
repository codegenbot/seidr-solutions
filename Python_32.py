```
input_nums = list(map(int, input("Enter numbers separated by space: ").split()))
def sum_even_and_odd(nums):
    even_sum = 0
    odd_sum = 0
    
    for num in nums:
        if num % 2 == 0:
            even_sum += num
        else:
            odd_sum += num
            
    return even_sum, odd_sum

even_sum, odd_sum = sum_even_and_odd(input_nums)
print("Sum of Even numbers: ", even_sum)
print("Sum of Odd numbers: ", odd_sum)