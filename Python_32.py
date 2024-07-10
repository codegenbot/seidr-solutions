def find_zero(xs):
    for i in range(len(xs)):
        if xs[i] == 0:
            return i
    return -1


while True:
    try:
        n = int(input("Enter the number of values in the list: "))
        print("Enter space-separated values for the list:")
        xs = list(map(float, input().split()))
        break
    except ValueError:
        print("Invalid input. Please try again.")

result = find_zero(xs)
print(result)