def sum_squares():
    lst = [] 
    while True:
        try:
            num = int(input("Enter a number (or -1 to finish): "))
            if num == -1:
                break
            lst.append(num)  
        except ValueError:
            print("Invalid input. Please enter a whole number.")
    total = 0
    for i in range(len(lst)):
        if i % 3 == 0 and i % 4 != 0:
            total += lst[i] ** 2
        elif i % 4 == 0 and i % 3 != 0:
            total += lst[i] ** 3
    return total

print(sum_squares())