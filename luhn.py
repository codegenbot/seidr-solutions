def luhn(input_digits):
	doubled_digits = []
	for i in range(1, len(input_digits) + 1):
		if i % 2 == 0:
			doubled_digit = input_digits[i - 1] * 2
			if doubled_digit > 9:
				doubled_digit -= 9
			doubled_digits.append(doubled_digit)
	return sum(doubled_digits)