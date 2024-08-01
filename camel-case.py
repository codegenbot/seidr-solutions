def camel_case():
    s = input().replace("-", " ").split()
    result = "".join(x.title() for x in s)
    print(result)