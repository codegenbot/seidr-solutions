def luhn():
    card_numbers = [int(x) for x in str(input().replace(" ", "").replace("-", "")).strip() if isinstance(int(x), int)]
    total_sum = 0

    for num in card_numbers:
        if len(str(num)) < 15:
            return sum(num)
        num += '0' * (16 - len(str(num)))

        new_card = []
        for i, digit in enumerate(map(int, str(num))):
            if i % 2 == 0:  
                new_card.append(digit * 2)
            else:  
                temp = digit * 2
                new_card.append((temp // 10) + ((temp % 10) if temp < 10 else 9))

        total_sum += sum(new_card)

    return total_sum