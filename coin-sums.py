count_pennies = cents // 1
cents %= 1

count_nickels = cents // 5
cents %= 5

count_dimes = cents // 10
cents %= 10

count_quarters = cents // 25
cents %= 25

print(*['{} {}'.format(count, name if count == 1 else f"{count} {name}s") for count, name in [(count_pennies, 'pennies'), (count_nickels, 'nickles'), (count_dimes, 'dimes'), (count_quarters, 'quarters')] + [(['0', 'quarters'][cents > 24], 'pennies') if cents else []], sep='\n')