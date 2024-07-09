def sum_squares():
    lst = input("Enter a list of numbers separated by space: ")
    lst = [int(x) for x in lst.split()]
    
    total = 0
    for i in lst:
        if isinstance(i, int):
            if i % 3 == 0 and i % 4 != 0:
                total += i ** 2
            elif i % 4 == 0 and i % 3 != 0:
                total += i ** 3
    return total

print(sum_squares())