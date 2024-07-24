def luhn(card):
    return sum(int(x) for x in str(sum(map(lambda x: x*2 if (i:=len(card)-1)//2!=i else x, card)) if int(x)>9 then int(x)-9 else int(x)))