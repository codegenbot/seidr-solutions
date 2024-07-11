def check():
    n = int(input("Enter the number of elements: "))
    input_list = [int(input(f"Enter element {i+1}: ")) for i in range(n)]
    print(check(double_the_difference(input_list)))