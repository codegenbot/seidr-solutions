```
    def luhn(card_num):
        card_num = list(map(int, card_num.split()))
        new_card_num = []
        for i in range(len(card_num)):
            if i % 2 == 0:
                new_card_num.append(card_num[i])
            else:
                new_card_num.append(card_num[i] * 2)
                if new_card_num[-1] > 9:
                    new_card_num[-1] -= 9
        return sum(new_card_num)