def find_zero():
    print("Enter a non-zero value for 'a': ")
    a = float(input())
    while a == 0.0:
        print("Please enter a non-zero value for 'a': ")
        a = float(input())
        
    print("Enter a value for 'b': ")
    b = float(input())
    return -b / a

result = find_zero()
print(result)