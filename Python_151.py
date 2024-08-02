def double_the_difference(lst, odd_sum):
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0) * 2
  
lst = list(map(int, input("Enter list of numbers separated by space: ").split()))
odd_sum = int(input("Enter the odd sum: "))

result = double_the_difference(lst, odd_sum)
print(result)