```
print(*['{} {}'.format(count, name if count == 1 else f"{count} {name}s") for count, name in result], sep='\n')