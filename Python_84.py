```
K = input("Enter a number: ")
if K.isdigit() and (int(K) == 0 or int(K) == 1):
    if int(K) == 1:
        print("0")
    else:
        print("1")
else:
    print("Invalid input")