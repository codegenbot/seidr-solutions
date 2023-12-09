def digits(n):
	product = 1
	while n > 0:
		if n % 2 == 1:
			product *= n % 10 or 1
		n //= 10
	return product