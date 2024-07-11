```
lst = input("Enter a list of numbers separated by spaces: ")
lst = [int(i) for i in lst.split()]
def sum_squares(lst):
    total_sum = 0
    three_list = [num for num in lst if num % 3 == 0]
    four_list = [num for num in lst if num % 4 == 0]
    
    for num in three_list:
        if num % 4 != 0:
            total_sum += num ** 2
        else:
            total_sum += num ** 3
            
    for num in four_list:
        total_sum += num ** 1.5
        
    return total_sum
print(sum_squares(lst))