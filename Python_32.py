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

if __name__ == "__main__":
    nums = list(map(int, input("Enter numbers separated by space: ").split()))
    even_sum, odd_sum = sum_even_and_odd(nums)
    print(f"Sum of even numbers is {even_sum} and sum of odd numbers is {odd_sum}")