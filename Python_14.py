def prefixes(s):
    return [s[:i+1] for i in range(len(s))]

prefixes_list = prefixes("python")
print(prefixes_list)