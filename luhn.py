Here is the solution:

def luhn(card_num):
    card_num = list(map(int, card_num))
    doubled = []
    for i in range(len(card_num)):
        if i % 2 == 0:
            doubled.append(card_num[i])
        else:
            doubled.append(card_num[i] * 2)
    
    summed = [num - 9 if num > 9 else num for num in doubled]
    return sum(summed)