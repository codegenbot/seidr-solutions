def find_max(lst):
    maximum = input("Enter a list of numbers separated by space: ").split()
    max_val = int(maximum[0])
    for i in range(len(maximum)):
        if int(maximum[i]) > max_val:
            max_val = int(maximum[i])
    print("The maximum value is: ", max_val)