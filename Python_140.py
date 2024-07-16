text = input().strip()
text = re.sub(r'\s{2,}', '_', text)
text = "_".join(text.split())
return text