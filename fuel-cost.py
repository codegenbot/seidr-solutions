def fuel_cost(lst):
    return sum((i//3-2) for i in map(int, lst.split()))

print(fuel_cost("5139 8938 6113 6944 7469 5561 2426 8235 9033 8377 3866 9196 7199 1044 8533 702 9601 4299 5657 3073"))