def count_up_to(n):
    result = []
    for i in range(1, n+1):
        result.append(i)
    return result

def check(lst):
    for num in lst:
        if num % 2 != 0:
            return False
    return True

n = int(input("Enter a number: "))
if check(count_up_to(n)):
    print("The numbers are even.")
else:
    print("The numbers are not all even.")