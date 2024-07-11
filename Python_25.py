```
while True:
    try:
        n = int(input("Enter a positive integer: "))
        if n <= 0:
            print("Please enter a positive integer.")
        elif n > 1000000:  
            print("The program might take a long time for large inputs. Try smaller values.")
        else:
            break
    except ValueError:
        print("Invalid input. Please enter an integer.")

print([i if all(i % j > 0 for j in range(2, int(i ** 0.5) + 1)) else "" for i in range(2, n + 1)])