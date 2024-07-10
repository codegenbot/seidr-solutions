if(text.substr(i, target.length()) == target) {
            indices.push_back(i);
        }
    }

    return indices;
}