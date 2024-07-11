```
numbers = [int(i) for i in input("Enter numbers separated by space: ").split()]
print(sort_even(numbers))
def sort_even(l):
    evens = sorted([x for x in l if x % 2 == 0])
    neg_odds = sorted([-x for x in l if x < 0 and x % 2 != 0])
    odds_pos = sorted([x for x in l if x > 0 and x % 2 != 0])
    return evens + neg_odds + odds_pos