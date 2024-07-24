def sum_squares(lst):
    return sum(i**3 if i%12==0 else i**2 if i%4==0 and i%3!=0 else i for i in lst)

numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9]
print(sum_squares(numbers))