def replace_spaces(text):
    words = text.split()
    result = ' '.join(['%10s' % word for word in words])
    return result