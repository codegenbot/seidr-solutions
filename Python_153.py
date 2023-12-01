def Strongest_Extension(class_name, extensions):
    strengths = [(ext, ext.count('A') + ext.count('B') + ext.count('C') - ext.count('a') - ext.count('b') - ext.count('c')) for ext in extensions]
    strengths.sort(key=lambda x: x[1], reverse=True)
    return class_name + '.' + strengths[0][0]