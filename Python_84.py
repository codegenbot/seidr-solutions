```
while True:
    K = int(input("Enter a number (0 or 1): "))
    if K == 0 or K == 1:
        break
    else:
        print("Invalid input, please try again.")
if K == 1:
    print(0)
else:
    print(1)