evens = list(map(int, input("Enter the even numbers separated by space: ").split()))
odds = list(map(int, input("Enter the odd numbers separated by space: ").split()))

if not evens and not odds:
    print("Error: No numbers entered.")
elif len(evens) == 0 and len(odds) != 0:
    print("Error: No even numbers entered.")
elif len(odds) == 0 and len(evens) != 0:
    print("Error: No odd numbers entered.")
else:
    if any(not isinstance(x, int) for x in evens + odds):
        print("Error: Non-integer values entered.")
    else:
        print(sort_even(evens + odds))