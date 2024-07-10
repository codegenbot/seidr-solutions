def eat(number, need, remaining):
    if remaining >= need:
        return number + (need - remaining)
    else:
        return number + remaining

number = int(input("Enter the initial quantity: "))
need = int(input("Enter the total needed: "))
remaining = int(input("Enter the remaining quantity: "))

print(eat(number, need, remaining))