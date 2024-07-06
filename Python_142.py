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
    return sum_squares(lst) 

print(sum_squares())