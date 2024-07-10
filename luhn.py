def luhn(card_number):
    card_number = map(int, card_number)
    card_number = list(card_number)
    odd_positions = card_number[1::2]
    even_positions = card_number[0::2]
    doubled_even = [i * 2 for i in even_positions]
    combined_list = [x if x > 9 else x for x in doubled_even + odd_positions]
    return sum(combined_list)