try:
    n = int(input())
    if n <= 1:
        print("Not Prime")
    elif n == 2:
        print("Prime")
    else:
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                print("Not Prime")
                break
        else:
            print("Prime")
except ValueError:
    print("Program did not receive expected input")