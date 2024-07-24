```"
i = 2
while i * i <= n:
    if n % i:
        i += 1
    else:
        n //= i
        while n % i == 0:
            n //= i
            factors.append(i)
i = n
if i > 1:
    factors.append(n)
return [1] + factors"```