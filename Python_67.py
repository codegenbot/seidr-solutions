def fruit_distribution(s, n):
    s = s.lower()
    words = s.split()
    count = 0
    for word in words:
        if ("apples" in word and int(word.replace(" apples", "").replace("apple", "")) < n) or ("oranges" in word and int(word.replace(" oranges", "").replace("orange", "")) < n):
            count += int(word.replace(" "+str({"apples": " apples", "oranges": " oranges"}).get(word.lower(), "").split()[0].replace(str({"apple": "apples", "orange": "oranges"})[word.lower().replace("s","").startswith("a")]).replace(str({"apple", "orange"})[0]))
    return n - count