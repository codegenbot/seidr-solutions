```
return sum(sum(int(digit) // 2 if idx % 2 == 0 else int(digit) * 2 - int(digit) * 2 // 10 if (int(digit) * 2) > 9 else int(digit) * 2 for idx, digit in enumerate(card)) )