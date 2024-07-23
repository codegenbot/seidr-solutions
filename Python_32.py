```Python
def find_zero(nums):
    return sum(num for num in nums if num == 0)

def sum_even_and_odd(nums):
    even_sum = 0
    odd_sum = 0
    
    for num in nums:
        if num % 2 == 0:
            even_sum += num
        else:
            odd_sum += num
            
    return even_sum, odd_sum

nums = [1, 2, 3, 4]
print(find_zero(nums))