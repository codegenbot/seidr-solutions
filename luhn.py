def luhn(card):
    return sum(int(d) for d in str(sum(int(x) if i%2 else int(x)*2 if int(x)*2>9 else int(x)*2 for i,x in enumerate(map(str,card[::-1])))))