import hashlib
def string_to_md5(text):
  try:
    return hashlib.md5(text.encode()).hexdigest()
  except:
    return None