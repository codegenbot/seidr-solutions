def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:]]
    result = sum(sum(divmod(d * 2, 10)) + d for d in filter(lambda x: x.isdigit(), card_number[:-1])) + int(filter(lambda x: x.isdigit(), card_number)[-1])
    return abs(result) % 10

card_numbers = list(map(int, filter(str.isdigit, input().split())))
print(luhn(card_numbers))