def check():
    n = int(input("Enter the number of elements in the list: "))
    lst = []
    for i in range(n):
        num = int(input(f"Enter element {i+1}: "))
        lst.append(num)
    result = double_the_difference(lst)
    print(f"The sum of squares of even numbers is: {result}")