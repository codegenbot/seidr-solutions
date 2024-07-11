def sort_even(l):
    evens = sorted([x for x in l if x % 2 == 0])
    neg_odds = sorted([-x for x in l if x < 0 and x % 2 != 0])
    odds_pos = sorted([x for x in l if x > 0 and x % 2 != 0])
    return evens + neg_odds + odds_pos

numbers = []
while True:
    try:
        user_input = input("Enter numbers separated by space: ")
        numbers = [int(i) for i in user_input.split()]
        break
    except ValueError:
        print("Invalid input. Please enter numeric values separated by spaces.")

print(sort_even(numbers))