def find_closest_elements():
    arr = input("Enter the array of elements: ").split()
    num1 = int(input("Enter the first number: "))
    num2 = int(input("Enter the second number: "))
    
    closest_diff = float('inf')
    closest_num1 = None
    closest_num2 = None
    
    for i in range(len(arr)):
        if abs(int(arr[i]) - num1) + abs(int(arr[i]) - num2) < closest_diff:
            closest_diff = abs(int(arr[i]) - num1) + abs(int(arr[i]) - num2)
            closest_num1, closest_num2 = int(arr[i]), int(arr[i])
    
    return str(closest_num1) + " and " + str(closest_num2)